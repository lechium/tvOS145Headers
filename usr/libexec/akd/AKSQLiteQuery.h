//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AKSQLiteQuery : NSObject
{
    _Bool _bindingFailure;	// 8 = 0x8
    NSString *_queryString;	// 16 = 0x10
    CDUnknownBlockType _bindHandler;	// 24 = 0x18
    CDUnknownBlockType _rowHandler;	// 32 = 0x20
}

+ (id)queryWithString:(id)arg1;	// IMP=0x0000000100071bbc
- (void).cxx_destruct;	// IMP=0x00000001000721dc
@property(copy, nonatomic) CDUnknownBlockType rowHandler; // @synthesize rowHandler=_rowHandler;
@property(copy, nonatomic) CDUnknownBlockType bindHandler; // @synthesize bindHandler=_bindHandler;
@property(nonatomic) _Bool bindingFailure; // @synthesize bindingFailure=_bindingFailure;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (_Bool)_bindStatement:(struct sqlite3_stmt *)arg1 withParameter:(id)arg2 atPosition:(int)arg3;	// IMP=0x0000000100072088
- (void)bindParameters:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100071dfc
- (void)bindParameter:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100071c10

@end

