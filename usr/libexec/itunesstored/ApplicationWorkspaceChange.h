//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ApplicationHandle;

@interface ApplicationWorkspaceChange : NSObject
{
    long long _changeType;	// 8 = 0x8
    ApplicationHandle *_applicationHandle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001001eca60
@property(copy, nonatomic) ApplicationHandle *applicationHandle; // @synthesize applicationHandle=_applicationHandle;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;

@end

