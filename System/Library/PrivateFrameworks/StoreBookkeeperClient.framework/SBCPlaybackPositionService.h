/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreBookkeeperClient/SBCXPCService.h>
#import <libobjc.A.dylib/SBCPlaybackPositionServiceProtocol.h>

@class SBCPlaybackPositionDomain, NSString;

@interface SBCPlaybackPositionService : SBCXPCService <SBCPlaybackPositionServiceProtocol> {

	BOOL _usingPlaybackPositions;
	SBCPlaybackPositionDomain* _playbackPositionDomain;

}

@property (readonly) BOOL usingPlaybackPositions;                                               //@synthesize usingPlaybackPositions=_usingPlaybackPositions - In the implementation block
@property (nonatomic,readonly) SBCPlaybackPositionDomain * playbackPositionDomain;              //@synthesize playbackPositionDomain=_playbackPositionDomain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceForSyncDomain:(id)arg1 ;
+(id)_serviceForPlaybackPositionDomain:(id)arg1 ;
+(id)serviceForValueDomain:(id)arg1 ;
+(Class)XPCServiceInterfaceClass;
-(SBCPlaybackPositionDomain *)playbackPositionDomain;
-(oneway void)deletePlaybackPositionEntity:(id)arg1 ;
-(oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1 ;
-(oneway void)beginAccessingPlaybackPositionEntities;
-(oneway void)endAccessingPlaybackPositionEntities;
-(oneway void)persistPlaybackPositionEntity:(id)arg1 isCheckpoint:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(oneway void)pullLocalPlaybackPositionForEntityIdentifiers:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)synchronizeImmediatelyWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithPlaybackPositionDomain:(id)arg1 ;
-(void)didConnectToService;
-(void)validateConnectionConfiguration;
-(oneway void)deletePlaybackPositionEntities;
-(oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)usingPlaybackPositions;
@end

