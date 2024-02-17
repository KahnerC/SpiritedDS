# SpiritedDS
An uninspired card game for the Nintendo DS

Spirited was a series about a rock star ghost who falls in love with an Australian dentist, fresh from the golden age of mad-lib television. Outside of a spartan DVD release, the series produced no merchandise...

Until now.

Today, I introduce you to Spirited DS, a barebones implementation of how I assume Top Trumps works, featuring 64x64 headshots of beloved Spirited characters, on the Nintendo DS. See how I feel these characters rate in 5 absolutely subjective qualities.

Does it fall under fair use? Who knows? But I don't think I'm causing much damage to a thirteen year old series on a sub-240p display, even if there are two of them.

The game is provided as a .nds file, suitable for a flashcart, modded 3DS, or emulator of your choice.

Tragically, there is no sound. Anyone who can help with that probably has better things to do.

Built with NightFoxLib (which feeds off of DevKitPro, LibNDS). Code was written in C++ in Notepad. Python was used to test some logic, and to process pictures from Krita.

Basic rules are: You pick one of five qualities listed on your card. If your value is bigger than your opponent's you win their card, and both cards go to the bottom of your deck. Lose, and it's your opponent's turn. They play by the same rules, and the game ends when one player has no more cards. It was primitive and dated even by late-seventies standards.


Originally published to itch.io in November 2023. On GitHub for submission to Universal-DB.
