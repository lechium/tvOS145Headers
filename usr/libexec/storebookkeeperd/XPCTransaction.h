//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_transaction;

@interface XPCTransaction : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100004d68
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dealloc;	// IMP=0x0000000100004d10
- (void)close;	// IMP=0x0000000100004cf8
- (void)open;	// IMP=0x0000000100004ca8
- (id)description;	// IMP=0x0000000100004c10
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000100004b98

@end

