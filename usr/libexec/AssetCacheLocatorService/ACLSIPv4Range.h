//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACLSIPv4Range : NSObject
{
    struct in_addr _first;	// 8 = 0x8
    struct in_addr _last;	// 12 = 0xc
}

@property struct in_addr last; // @synthesize last=_last;
@property struct in_addr first; // @synthesize first=_first;
- (id)description;	// IMP=0x0000000100005eb4
- (_Bool)containsAddress:(const struct in_addr *)arg1;	// IMP=0x0000000100005e58
- (id)initWithFirst:(const struct in_addr *)arg1 andLast:(const struct in_addr *)arg2;	// IMP=0x0000000100005d98

@end

