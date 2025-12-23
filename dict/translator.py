import requests
import csv
import io

def generate_translation_file():
    print("Downloading official Pokémon name database from PokéAPI...")
    # This is the official raw data file containing names in all languages
    url = "https://raw.githubusercontent.com/PokeAPI/pokeapi/master/data/v2/csv/pokemon_species_names.csv"
    
    try:
        response = requests.get(url)
        response.raise_for_status()
    except Exception as e:
        print(f"Error downloading data: {e}")
        return

    print("Download complete. Processing names...")
    
    # PokéAPI Language IDs:
    # 1 = Japanese (Kana) - This is our TARGET
    # 5 = French
    # 6 = German
    # 9 = English
    # 3 = Korean, 7 = Spanish, 8 = Italian (Available if needed)
    
    # We need to group names by their 'pokemon_species_id' first
    # Structure: species_db[id] = { 1: "kana_name", 6: "german_name", ... }
    species_db = {}
    
    # Read the CSV content
    f = io.StringIO(response.text)
    reader = csv.DictReader(f)
    
    for row in reader:
        try:
            p_id = int(row['pokemon_species_id'])
            l_id = int(row['local_language_id'])
            name = row['name']
            
            if p_id not in species_db:
                species_db[p_id] = {}
            
            species_db[p_id][l_id] = name
        except ValueError:
            continue

    # Now create the mapping: "Any Name" -> "Japanese Kana"
    translation_map = {}
    
    for p_id, names in species_db.items():
        # We must have a Japanese name to map TO
        if 1 in names:
            kana = names[1]
            
            # Map German -> Kana
            if 6 in names:
                translation_map[names[6].lower()] = kana
            
            # Map French -> Kana
            if 5 in names:
                translation_map[names[5].lower()] = kana
                
            # Map English -> Kana
            if 9 in names:
                translation_map[names[9].lower()] = kana
                
            # Also map the Kana to itself (just in case)
            translation_map[kana] = kana

    # Write the dictionary file
    with open("translations.txt", "w", encoding="utf-8") as f:
        for name_key, kana_value in translation_map.items():
            f.write(f"{name_key} {kana_value}\n")

    print(f"Success! 'translations.txt' created with {len(translation_map)} entries.")
    print("You can now run your C converter program.")

if __name__ == "__main__":
    generate_translation_file()