//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKTournamentInternal, NSArray, NSData, NSDictionary, NSString;

@interface GKMatchRequestInternal : GKInternalRepresentation
{
    unsigned int _matchType;
    NSArray *_recipients;
    NSArray *_recipientPlayerIDs;
    NSString *_inviteMessage;
    NSDictionary *_localizableInviteMessage;
    NSData *_sessionToken;
    NSString *_rid;
    unsigned int _version;
    _Bool _preloadedMatch;
    unsigned int _playerGroup;
    unsigned int _playerAttributes;
    unsigned char _minPlayers;
    unsigned char _maxPlayers;
    unsigned char _defaultNumberOfPlayers;
    _Bool _restrictToAutomatch;
    GKTournamentInternal *_tournamentForInvitePool;
}

+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) GKTournamentInternal *tournamentForInvitePool; // @synthesize tournamentForInvitePool=_tournamentForInvitePool;
@property(nonatomic) _Bool restrictToAutomatch; // @synthesize restrictToAutomatch=_restrictToAutomatch;
@property(nonatomic) unsigned char defaultNumberOfPlayers; // @synthesize defaultNumberOfPlayers=_defaultNumberOfPlayers;
@property(nonatomic, getter=isPreloadedMatch) _Bool preloadedMatch; // @synthesize preloadedMatch=_preloadedMatch;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(nonatomic) unsigned int matchType; // @synthesize matchType=_matchType;
@property(retain, nonatomic) NSDictionary *localizableInviteMessage; // @synthesize localizableInviteMessage=_localizableInviteMessage;
@property(copy, nonatomic) NSString *inviteMessage; // @synthesize inviteMessage=_inviteMessage;
@property(retain, nonatomic) NSArray *recipientPlayerIDs; // @synthesize recipientPlayerIDs=_recipientPlayerIDs;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) unsigned int playerAttributes; // @synthesize playerAttributes=_playerAttributes;
@property(nonatomic) unsigned int playerGroup; // @synthesize playerGroup=_playerGroup;
@property(nonatomic) unsigned char maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(nonatomic) unsigned char minPlayers; // @synthesize minPlayers=_minPlayers;
- (_Bool)hasGuestPlayers;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

