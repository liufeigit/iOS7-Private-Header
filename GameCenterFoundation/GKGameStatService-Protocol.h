/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol GKGameStatService <NSObject>

- (oneway void)getAchievementDescriptionsForGameDescriptor:(id)arg1 handler:(id)arg2;

- (oneway void)getAchievementsForGameDescriptor:(id)arg1 playerIDs:(id)arg2 handler:(id)arg3;

- (oneway void)getDefaultLeaderboardIDWithHandler:(id)arg1;

- (oneway void)getLeaderboadForRequest:(id)arg1 handler:(id)arg2;

- (oneway void)getLeaderboardSetsForGameDescriptor:(id)arg1 handler:(id)arg2;

- (oneway void)getLeaderboardsForGameDescriptor:(id)arg1 playerID:(id)arg2 setIdentifier:(id)arg3 handler:(id)arg4;

- (oneway void)getPlayersForGameDescriptor:(id)arg1 achievementIdentifier:(id)arg2 handler:(id)arg3;

- (oneway void)getPlayersForGameDescriptor:(id)arg1 includeCompatibleMultiplayerGames:(_Bool)arg2 handler:(id)arg3;

- (oneway void)getPlayersForGameDescriptor:(id)arg1 leaderboardIdentifier:(id)arg2 handler:(id)arg3;

- (oneway void)getRecentMatchesForGameDescriptor:(id)arg1 otherPlayerID:(id)arg2 handler:(id)arg3;

- (oneway void)resetAchievementsWithHandler:(id)arg1;

- (oneway void)setDefaultLeaderboardID:(id)arg1 handler:(id)arg2;

- (void)submitAchievements:(id)arg1 whileScreeningChallenges:(_Bool)arg2 withEligibleChallenges:(id)arg3 handler:(id)arg4;

- (void)submitScores:(id)arg1 whileScreeningChallenges:(_Bool)arg2 withEligibleChallenges:(id)arg3 handler:(id)arg4;

@end

