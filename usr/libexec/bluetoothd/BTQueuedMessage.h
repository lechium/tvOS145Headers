//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary;

@interface BTQueuedMessage : NSObject <NSCoding>
{
    unsigned short _msgId;	// 8 = 0x8
    NSDictionary *_arguments;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100269128
@property(retain) NSDictionary *arguments; // @synthesize arguments=_arguments;
@property unsigned short msgId; // @synthesize msgId=_msgId;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100269034
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100268fbc
- (id)initWithMsg:(unsigned short)arg1 arguments:(id)arg2;	// IMP=0x0000000100268f24
- (id)init;	// IMP=0x0000000100268f00

@end

