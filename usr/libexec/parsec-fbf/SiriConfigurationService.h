//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Osprey/OspreyService.h>

@class OspreyMethodCall, _TtC11FlusherUtil32FBFOspreyConnectionConfiguration;

@interface SiriConfigurationService : OspreyService
{
    OspreyMethodCall *_configurationVersionMethod;	// 8 = 0x8
    _TtC11FlusherUtil32FBFOspreyConnectionConfiguration *_connectionConfiguration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100003e9c
@property(readonly, nonatomic) _TtC11FlusherUtil32FBFOspreyConnectionConfiguration *connectionConfiguration; // @synthesize connectionConfiguration=_connectionConfiguration;
- (id)configurationWithResponseHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003df0
@property(readonly, nonatomic) OspreyMethodCall *configurationVersionMethod; // @synthesize configurationVersionMethod=_configurationVersionMethod;
- (id)initWithConnectionConfiguration:(id)arg1;	// IMP=0x0000000100003b04

@end

