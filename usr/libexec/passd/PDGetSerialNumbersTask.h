//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDWebServiceConnectionTask.h"

@class NSDate, NSString;

@interface PDGetSerialNumbersTask : PDWebServiceConnectionTask
{
    NSString *_lastUpdatedTag;	// 16 = 0x10
    NSDate *_tagLastUpdateDate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010019a728
+ (id)taskWithWebService:(id)arg1 lastUpdatedTag:(id)arg2 tagLastUpdateDate:(id)arg3;	// IMP=0x000000010019a5c0
- (void).cxx_destruct;	// IMP=0x000000010019b2b4
@property(retain, nonatomic) NSDate *tagLastUpdateDate; // @synthesize tagLastUpdateDate=_tagLastUpdateDate;
@property(retain, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
- (id)_resultFromResponseData:(id)arg1;	// IMP=0x000000010019aff8
- (_Bool)_matchesGetSerialNumbersTask:(id)arg1;	// IMP=0x000000010019aea8
- (long long)actionForActiveTask:(id)arg1;	// IMP=0x000000010019ae80
- (long long)actionForInactiveTask:(id)arg1;	// IMP=0x000000010019ae58
- (_Bool)coalescesWithTaskSubclass:(Class)arg1;	// IMP=0x000000010019ae20
- (id)description;	// IMP=0x000000010019ad08
- (void)handleError:(id)arg1;	// IMP=0x000000010019acd4
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x000000010019ab1c
- (id)queryFields;	// IMP=0x000000010019aaa4
- (id)endpointComponents;	// IMP=0x000000010019a984
- (id)method;	// IMP=0x000000010019a978
- (_Bool)isValid;	// IMP=0x000000010019a8d8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010019a82c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010019a730
- (id)initWithWebService:(id)arg1 lastUpdatedTag:(id)arg2 tagLastUpdateDate:(id)arg3;	// IMP=0x000000010019a650

@end

