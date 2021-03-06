//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMDRemoveEffectivePolicyRequest : DMFTaskRequest
{
    NSString *_organizationIdentifier;	// 8 = 0x8
    NSString *_declarationIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010005d428
- (void).cxx_destruct;	// IMP=0x000000010005d6b8
@property(copy, nonatomic) NSString *declarationIdentifier; // @synthesize declarationIdentifier=_declarationIdentifier;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010005d59c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010005d430

@end

