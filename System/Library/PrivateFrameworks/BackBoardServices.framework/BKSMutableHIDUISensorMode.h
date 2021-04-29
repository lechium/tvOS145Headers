/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BackBoardServices/BKSHIDUISensorMode.h>

@class NSString;

@interface BKSMutableHIDUISensorMode : BKSHIDUISensorMode

@property (assign,nonatomic) BOOL estimatedProximityMode; 
@property (assign,nonatomic) long long versionedPID; 
@property (nonatomic,retain) NSString * reason; 
@property (assign,nonatomic) unsigned long long changeSource; 
@property (assign,nonatomic) int proximityDetectionMode; 
@property (assign,nonatomic) BOOL postEventWithCurrentDetectionMask; 
@property (assign,nonatomic) BOOL digitizerEnabled; 
@property (assign,nonatomic) BOOL pocketTouchesExpected; 
@property (assign,nonatomic) BOOL tapToWakeEnabled; 
@property (assign,nonatomic) BOOL coverGestureEnabled; 
@property (assign,nonatomic) BOOL alwaysOnGesturesEnabled; 
-(void)setVersionedPID:(long long)arg1 ;
-(id)initWithReason:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setChangeSource:(unsigned long long)arg1 ;
-(void)setProximityDetectionMode:(int)arg1 ;
-(void)setDigitizerEnabled:(BOOL)arg1 ;
-(void)setPocketTouchesExpected:(BOOL)arg1 ;
-(void)setTapToWakeEnabled:(BOOL)arg1 ;
-(void)setCoverGestureEnabled:(BOOL)arg1 ;
-(void)setAlwaysOnGesturesEnabled:(BOOL)arg1 ;
-(void)setPostEventWithCurrentDetectionMask:(BOOL)arg1 ;
-(void)setEstimatedProximityMode:(BOOL)arg1 ;
@end
