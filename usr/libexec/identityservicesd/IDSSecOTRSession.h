//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSSecOTRSession : NSObject
{
    struct _SecOTRSession *_backingOTRSessionRef;	// 8 = 0x8
}

@property(nonatomic) struct _SecOTRSession *backingOTRSessionRef; // @synthesize backingOTRSessionRef=_backingOTRSessionRef;
- (id)verifyAndExposeMessage:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010008d7c4
- (id)signAndProtectMessage:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010008d440
- (void)dealloc;	// IMP=0x000000010008d3d8
- (id)initWithSecOTRSessionRef:(struct _SecOTRSession *)arg1;	// IMP=0x000000010008d310

@end

