//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface CKKSLaunchEvent : NSObject <NSCopying>
{
    unsigned int _counter;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100191324
@property unsigned int counter; // @synthesize counter=_counter;
@property(retain) NSDate *date; // @synthesize date=_date;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001911e0
- (id)initWithName:(id)arg1;	// IMP=0x0000000100191134

@end

