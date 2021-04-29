/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CinematicFraming.framework/CinematicFraming
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CinematicTrackerDelegate <NSObject>
@required
-(void)cinematicTracker:(id)arg1 didTrackLeave:(id)arg2 atTime:(SCD_Struct_Ci3)arg3;
-(void)cinematicTracker:(id)arg1 didTrackBecomeStationaryFirstTime:(id)arg2 atTime:(SCD_Struct_Ci3)arg3;
-(void)cinematicTracker:(id)arg1 didTrackEnter:(id)arg2 atTime:(SCD_Struct_Ci3)arg3;

@end
