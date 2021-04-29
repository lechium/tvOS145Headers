/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class GCDeviceAdaptiveTriggersPayload, GCDeviceAdaptiveTriggersStatusPayload;


@protocol GCAdaptiveTriggers <GCControllerComponent>
@property (nonatomic,retain) GCDeviceAdaptiveTriggersPayload * leftTrigger; 
@property (nonatomic,retain) GCDeviceAdaptiveTriggersStatusPayload * leftStatus; 
@property (nonatomic,retain) GCDeviceAdaptiveTriggersPayload * rightTrigger; 
@property (nonatomic,retain) GCDeviceAdaptiveTriggersStatusPayload * rightStatus; 
@required
-(GCDeviceAdaptiveTriggersPayload *)leftTrigger;
-(GCDeviceAdaptiveTriggersPayload *)rightTrigger;
-(void)setLeftStatus:(id)arg1;
-(void)setRightStatus:(id)arg1;
-(void)setLeftTrigger:(id)arg1;
-(GCDeviceAdaptiveTriggersStatusPayload *)leftStatus;
-(void)setRightTrigger:(id)arg1;
-(GCDeviceAdaptiveTriggersStatusPayload *)rightStatus;

@end
