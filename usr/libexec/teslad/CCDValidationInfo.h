//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CCDValidationInfo : NSObject
{
    _Bool _isRequired;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSDictionary *_validationInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000d070
@property(retain, nonatomic) NSDictionary *validationInfo; // @synthesize validationInfo=_validationInfo;
@property(nonatomic) _Bool isRequired; // @synthesize isRequired=_isRequired;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)validateSelfUsingValidationInfoWithDictionary:(id)arg1 resultsDictionary:(id)arg2;	// IMP=0x000000010000d030
- (_Bool)validateSelfWithDictionary:(id)arg1 resultsDictionary:(id)arg2;	// IMP=0x000000010000cf54
- (id)initWithName:(id)arg1 validationInfo:(id)arg2;	// IMP=0x000000010000ce74

@end

