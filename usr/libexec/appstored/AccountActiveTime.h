//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class AccountEvent;

@interface AccountActiveTime : NSObject <NSCopying>
{
    AccountEvent *_event;	// 8 = 0x8
    double _start;	// 16 = 0x10
    double _end;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100077004
@property double end; // @synthesize end=_end;
@property double start; // @synthesize start=_start;
@property(copy) AccountEvent *event; // @synthesize event=_event;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100076f50
- (id)diagnosticDescription;	// IMP=0x0000000100076cec
- (id)description;	// IMP=0x0000000100076b0c

@end

