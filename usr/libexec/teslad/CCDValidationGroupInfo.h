//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CCDValidationInfo.h"

@class NSArray;

@interface CCDValidationGroupInfo : CCDValidationInfo
{
    NSArray *_keyInfo;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100006234
@property(retain, nonatomic) NSArray *keyInfo; // @synthesize keyInfo=_keyInfo;
- (_Bool)validateSelfUsingValidationInfoWithDictionary:(id)arg1 resultsDictionary:(id)arg2;	// IMP=0x0000000100005f88
- (id)_mutableKeyInfoArrayFromValidationInfo:(id)arg1;	// IMP=0x0000000100005dcc
- (id)initWithName:(id)arg1 validationInfo:(id)arg2;	// IMP=0x0000000100005d24

@end

