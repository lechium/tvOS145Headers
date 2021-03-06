//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSystemOverlayUIProvider-Protocol.h"

@class NSString;

@interface _PBUserPresentationUIProvider : NSObject <PBSystemOverlayUIProvider>
{
    NSString *_serviceName;	// 8 = 0x8
    NSString *_className;	// 16 = 0x10
    CDUnknownBlockType _prepareHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010016bba4
@property(readonly, copy, nonatomic) CDUnknownBlockType prepareHandler; // @synthesize prepareHandler=_prepareHandler;
@property(readonly, copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010016b76c
- (id)initWithServiceName:(id)arg1 className:(id)arg2 viewServicePrepareHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010016b5f8

@end

