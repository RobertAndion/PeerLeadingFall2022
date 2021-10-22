import os
import discord
from dotenv import load_dotenv
from discord.ext import commands
intents = discord.Intents.default()

load_dotenv()
TOKEN = os.getenv('DISCORD_TOKEN')


client = commands.Bot(command_prefix='.',intents=intents)

@client.event
async def on_ready():
    print("Bot is live")

@client.command(name="Hello", aliases = ['hello'])
async def hello(ctx):
    await ctx.send('hi ' + ctx.author.name)

client.run(TOKEN)