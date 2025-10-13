import datetime
import random

def generate_daily_reminder():
    """Generates daily reminders for personal improvement quests."""

    today = datetime.date.today()
    day_of_week = today.strftime("%A")

    categories = {
        "looks": [
            "Practice a new makeup technique.",
            "Try a different outfit combination.",
            "Experiment with a new accessory.",
            "Research face yoga exercises.",
            "Learn about color analysis for your skin tone."
        ],
        "height": [
            "Perform stretching exercises for posture.",
            "Research exercises to improve posture.",
            "Focus on maintaining proper spinal alignment throughout the day.",
            "If applicable, research dietary options related to bone health."
        ],
        "hair": [
            "Try a new hairstyle.",
            "Use a deep conditioning treatment.",
            "Research hair care tips for your hair type.",
            "Gently massage your scalp to stimulate hair growth.",
            "Experiment with a new hair product."
        ],
        "body": [
            "Complete a 30-minute workout.",
            "Focus on a specific muscle group during your workout.",
            "Try a new healthy recipe.",
            "Go for a brisk walk or jog.",
            "Practice mindful eating."
        ],
        "skin": [
            "Use a face mask.",
            "Exfoliate your skin gently.",
            "Apply sunscreen even on cloudy days.",
            "Increase your water intake.",
            "Research skincare routines for your skin type."
        ],
        "personality": [
            "Read a chapter of a self-improvement book.",
            "Practice active listening during conversations.",
            "Write in a gratitude journal.",
            "Learn a new skill or hobby.",
            "Practice a mindfulness meditation session.",
            "Reach out to a friend or family member you haven't spoken to in a while.",
            "Work on a creative project."
        ]
    }

    # Circumstances and adjustments:
    circumstance_modifiers = {
        "Monday": {"body": "Focus on cardio.", "personality": "Plan your week."},
        "Friday": {"skin": "Treat yourself to a relaxing bath.", "personality": "Reflect on your week."},
        "Rainy Day": {"hair": "Use a humidity-resistant product.", "personality": "Spend time indoors learning something new."},
        "Sunny Day": {"skin": "Apply extra sunscreen.", "body": "Go for an outdoor activity."},
        "Tired": {"body": "Do light stretches instead of a full workout.", "personality": "Prioritize rest and relaxation."},
        "Stressed": {"personality": "Practice deep breathing exercises.", "skin": "Use calming skincare products."},
    }

    selected_categories = random.sample(list(categories.keys()), 3) # Select 3 random categories
    reminders = []

    for category in selected_categories:
        reminders.append(random.choice(categories[category]))

    # Check for circumstances (example: simple day check)
    if day_of_week == "Monday":
        if "body" in selected_categories:
            reminders[selected_categories.index("body")] = circumstance_modifiers["Monday"]["body"]
        if "personality" in selected_categories:
            reminders[selected_categories.index("personality")] = circumstance_modifiers["Monday"]["personality"]
    elif day_of_week == "Friday":
        if "skin" in selected_categories:
            reminders[selected_categories.index("skin")] = circumstance_modifiers["Friday"]["skin"]
        if "personality" in selected_categories:
            reminders[selected_categories.index("personality")] = circumstance_modifiers["Friday"]["personality"]

    # Add a random circumstance (example: weather simulation)
    weather = random.choice(["Sunny Day", "Rainy Day"])
    if weather == "Rainy Day":
        if "hair" in selected_categories:
            reminders[selected_categories.index("hair")] = circumstance_modifiers["Rainy Day"]["hair"]
        if "personality" in selected_categories:
            reminders[selected_categories.index("personality")] = circumstance_modifiers["Rainy Day"]["personality"]

    elif weather == "Sunny Day":
        if "skin" in selected_categories:
            reminders[selected_categories.index("skin")] = circumstance_modifiers["Sunny Day"]["skin"]
        if "body" in selected_categories:
            reminders[selected_categories.index("body")] = circumstance_modifiers["Sunny Day"]["body"]

    #Add random "tired" or "stressed" modifiers.
    condition = random.choice(["Tired", "Stressed", "Normal"])
    if condition == "Tired":
        if "body" in selected_categories:
            reminders[selected_categories.index("body")] = circumstance_modifiers["Tired"]["body"]
        if "personality" in selected_categories:
            reminders[selected_categories.index("personality")] = circumstance_modifiers["Tired"]["personality"]
    elif condition == "Stressed":
        if "personality" in selected_categories:
            reminders[selected_categories.index("personality")] = circumstance_modifiers["Stressed"]["personality"]
        if "skin" in selected_categories:
            reminders[selected_categories.index("skin")] = circumstance_modifiers["Stressed"]["skin"]

    return reminders

if __name__ == "__main__":
    daily_reminders = generate_daily_reminder()
    print("Your Daily Personal Improvement Reminders:")
    for reminder in daily_reminders:
        print(f"- {reminder}")