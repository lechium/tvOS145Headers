//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, PBSExternalControlSystem;

@protocol PBSExternalControlSystemDelegate <NSObject>

@optional
- (void)externalControlSystem:(PBSExternalControlSystem *)arg1 didFinishLearningAction:(int)arg2;
- (void)externalControlSystem:(PBSExternalControlSystem *)arg1 didCompleteLearningAction:(int)arg2 withResult:(_Bool)arg3 error:(NSError *)arg4;
- (void)externalControlSystem:(PBSExternalControlSystem *)arg1 didLearnAction:(int)arg2 withProgress:(double)arg3;
- (void)externalControlSystem:(PBSExternalControlSystem *)arg1 willStartLearningAction:(int)arg2;
- (void)externalControlSystem:(PBSExternalControlSystem *)arg1 didReceiveRequest:(long long)arg2;
- (void)externalControlSystem:(PBSExternalControlSystem *)arg1 didReceiveDeviceEvent:(long long)arg2;
- (void)externalControlSystem:(PBSExternalControlSystem *)arg1 didCompleteAction:(int)arg2 withResult:(_Bool)arg3 error:(NSError *)arg4;
- (void)externalControlSystem:(PBSExternalControlSystem *)arg1 didChangeLinkStatus:(_Bool)arg2;
- (void)externalControlSystem:(PBSExternalControlSystem *)arg1 didChangeReadyStatus:(_Bool)arg2;
- (void)externalControlSystem:(PBSExternalControlSystem *)arg1 didHandleRemoteControlButtonReleased:(long long)arg2;
- (void)externalControlSystem:(PBSExternalControlSystem *)arg1 didHandleRemoteControlButtonPressed:(long long)arg2;
- (void)externalControlSystemDidResignActiveSource:(PBSExternalControlSystem *)arg1;
- (void)externalControlSystemDidBecomeActiveSource:(PBSExternalControlSystem *)arg1;
- (void)externalControlSystemDidUpdatePolicy:(PBSExternalControlSystem *)arg1;
- (void)externalControlSystemDidChangeTopology:(PBSExternalControlSystem *)arg1;
@end

