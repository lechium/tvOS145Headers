//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PBRemoteBulletinViewController, _PBBulletinContentPresentingViewController;

@interface _PBBulletinInfo : NSObject
{
    double _timeoutInSeconds;	// 8 = 0x8
    _PBBulletinContentPresentingViewController *_contentPresentingViewController;	// 16 = 0x10
    PBRemoteBulletinViewController *_bulletinViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010007cacc
@property(retain, nonatomic) PBRemoteBulletinViewController *bulletinViewController; // @synthesize bulletinViewController=_bulletinViewController;
@property(retain, nonatomic) _PBBulletinContentPresentingViewController *contentPresentingViewController; // @synthesize contentPresentingViewController=_contentPresentingViewController;
@property(nonatomic) double timeoutInSeconds; // @synthesize timeoutInSeconds=_timeoutInSeconds;

@end

