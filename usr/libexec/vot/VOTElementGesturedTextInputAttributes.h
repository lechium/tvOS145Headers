//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VOTElementGesturedTextInputAttributes : NSObject
{
    _Bool _canDeleteCharacter;	// 8 = 0x8
    _Bool _shouldEchoCharacter;	// 9 = 0x9
    _Bool _acceptsRawInput;	// 10 = 0xa
    _Bool _shouldPlayKeyboardSecureClickSound;	// 11 = 0xb
    _Bool _acceptsContractedBraille;	// 12 = 0xc
    unsigned long long _preferredCharacterSet;	// 16 = 0x10
    unsigned long long _allowedCharacterSets;	// 24 = 0x18
    NSString *_language;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010005cf18
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) _Bool acceptsContractedBraille; // @synthesize acceptsContractedBraille=_acceptsContractedBraille;
@property(nonatomic) _Bool shouldPlayKeyboardSecureClickSound; // @synthesize shouldPlayKeyboardSecureClickSound=_shouldPlayKeyboardSecureClickSound;
@property(nonatomic) _Bool acceptsRawInput; // @synthesize acceptsRawInput=_acceptsRawInput;
@property(nonatomic) _Bool shouldEchoCharacter; // @synthesize shouldEchoCharacter=_shouldEchoCharacter;
@property(nonatomic) _Bool canDeleteCharacter; // @synthesize canDeleteCharacter=_canDeleteCharacter;
@property(nonatomic) unsigned long long allowedCharacterSets; // @synthesize allowedCharacterSets=_allowedCharacterSets;
@property(nonatomic) unsigned long long preferredCharacterSet; // @synthesize preferredCharacterSet=_preferredCharacterSet;
- (id)description;	// IMP=0x000000010005cc48
- (id)_descriptionForBool:(_Bool)arg1;	// IMP=0x000000010005cc2c
- (id)_descriptionForCharacterSets:(unsigned long long)arg1;	// IMP=0x000000010005cb4c
- (id)initWithAttributes:(id)arg1;	// IMP=0x000000010005c810

@end

