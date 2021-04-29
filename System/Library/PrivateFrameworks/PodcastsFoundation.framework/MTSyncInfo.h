/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, MTEpisode, MTPlaylist, MTPodcast;

@interface MTSyncInfo : NSManagedObject

@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) long long syncID; 
@property (assign,nonatomic) int entityType; 
@property (assign,nonatomic) int syncability; 
@property (assign,nonatomic) long long insertionRevision; 
@property (assign,nonatomic) long long updateRevision; 
@property (assign,nonatomic) long long artworkUpdateRevision; 
@property (assign,nonatomic,__weak) MTEpisode * episode; 
@property (assign,nonatomic,__weak) MTPlaylist * playlist; 
@property (assign,nonatomic,__weak) MTPodcast * podcast; 
+(id)predicateForHasNoInverseRelation;
+(id)predicateForIsCurrentlySyncable:(BOOL)arg1 ;
@end

