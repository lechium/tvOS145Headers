/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>

@interface WFRecordAudioAction : WFAction

@property (nonatomic,readonly) long long outputFormat; 
@property (nonatomic,readonly) BOOL startImmediately; 
@property (nonatomic,readonly) double recordingDuration; 
+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
+(id)fileTypeForFormat:(long long)arg1 ;
+(id)datedFilenameForFormat:(long long)arg1 ;
-(long long)outputFormat;
-(double)recordingDuration;
-(void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2 ;
-(BOOL)startImmediately;
@end

