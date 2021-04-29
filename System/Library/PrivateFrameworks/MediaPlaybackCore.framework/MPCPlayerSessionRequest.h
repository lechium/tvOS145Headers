/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPRequest.h>
#import <libobjc.A.dylib/MPCMediaRemoteMiddlewareMetadataOperationConfiguration.h>

@class MPCPlayerPath, MPPropertySet, NSString;

@interface MPCPlayerSessionRequest : MPRequest <MPCMediaRemoteMiddlewareMetadataOperationConfiguration> {

	MPCPlayerPath* _playerPath;
	MPPropertySet* _sessionProperties;

}

@property (nonatomic,retain) MPCPlayerPath * playerPath;                                  //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) MPPropertySet * sessionProperties;                             //@synthesize sessionProperties=_sessionProperties - In the implementation block
@property (readonly) SCD_Struct_MP1 tracklistRange; 
@property (nonatomic,readonly) MPPropertySet * playingItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueSectionProperties; 
@property (nonatomic,readonly) NSString * preferredFallbackItemRelationship; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(MPCPlayerPath *)playerPath;
-(void)setPlayerPath:(MPCPlayerPath *)arg1 ;
-(id)middlewareClasses;
-(SCD_Struct_MP1)tracklistRange;
-(MPPropertySet *)playingItemProperties;
-(MPPropertySet *)queueItemProperties;
-(MPPropertySet *)queueSectionProperties;
-(MPPropertySet *)sessionProperties;
-(void)setSessionProperties:(MPPropertySet *)arg1 ;
@end

