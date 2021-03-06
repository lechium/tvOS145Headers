//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, PKExpressPassInformation;

@interface PDExpressMutationRequest : NSObject
{
    NSString *_passUniqueIdentifier;	// 8 = 0x8
    PKExpressPassInformation *_expressInformation;	// 16 = 0x10
    NSData *_credential;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
    long long _cardTypeToRemove;	// 40 = 0x28
    CDUnknownBlockType _cardTypeRemovalCompletion;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000d8474
@property(copy, nonatomic) CDUnknownBlockType cardTypeRemovalCompletion; // @synthesize cardTypeRemovalCompletion=_cardTypeRemovalCompletion;
@property(nonatomic) long long cardTypeToRemove; // @synthesize cardTypeToRemove=_cardTypeToRemove;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSData *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) PKExpressPassInformation *expressInformation; // @synthesize expressInformation=_expressInformation;
@property(copy, nonatomic) NSString *passUniqueIdentifier; // @synthesize passUniqueIdentifier=_passUniqueIdentifier;

@end

