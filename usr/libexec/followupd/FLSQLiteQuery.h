//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FLSQLiteQuery : NSObject
{
    NSString *_queryString;	// 8 = 0x8
    CDUnknownBlockType _bindHandler;	// 16 = 0x10
    CDUnknownBlockType _rowHandler;	// 24 = 0x18
}

+ (id)queryWithString:(id)arg1;	// IMP=0x000000010000f650
- (void).cxx_destruct;	// IMP=0x000000010000f6e0
@property(copy, nonatomic) CDUnknownBlockType rowHandler; // @synthesize rowHandler=_rowHandler;
@property(copy, nonatomic) CDUnknownBlockType bindHandler; // @synthesize bindHandler=_bindHandler;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;

@end

