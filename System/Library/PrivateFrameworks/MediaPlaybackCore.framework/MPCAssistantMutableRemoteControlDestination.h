/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MPCAssistantRemoteControlDestination.h>

@class NSString, NSArray;

@interface MPCAssistantMutableRemoteControlDestination : MPCAssistantRemoteControlDestination

@property (nonatomic,copy) NSString * appBundleID; 
@property (nonatomic,copy) NSString * playerID; 
@property (assign,nonatomic) void* origin; 
@property (nonatomic,copy) NSArray * outputDeviceUIDs; 
@property (nonatomic,copy) NSArray * hashedOutputDeviceUIDs; 
@property (nonatomic,copy) NSArray * outputGroups; 
@property (nonatomic,copy) NSString * outputGroupID; 
@property (nonatomic,copy) NSString * originatingOutputDeviceUID; 
@property (assign,nonatomic) BOOL singleGroup; 
-(void)setAppBundleID:(NSString *)arg1 ;
-(void)setOrigin:(void*)arg1 ;
-(void)setOutputDeviceUIDs:(NSArray *)arg1 ;
-(void)setHashedOutputDeviceUIDs:(NSArray *)arg1 ;
-(void)setPlayerID:(NSString *)arg1 ;
-(void)setOutputGroups:(NSArray *)arg1 ;
-(void)setOutputGroupID:(NSString *)arg1 ;
-(void)setOriginatingOutputDeviceUID:(NSString *)arg1 ;
-(void)setSingleGroup:(BOOL)arg1 ;
@end

