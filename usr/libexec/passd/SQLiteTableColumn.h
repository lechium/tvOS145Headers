//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SQLiteTableColumn : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_qualifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100216e04
@property(retain, nonatomic) NSString *qualifiers; // @synthesize qualifiers=_qualifiers;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000100216d9c
- (id)SQL;	// IMP=0x0000000100216cc8

@end
