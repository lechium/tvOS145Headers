//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSSet, NSString;
@protocol UMUserPersonaManagement;

@interface PBModifyPersonaApplicationIdentifiersOperation : NSOperation
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
    id <UMUserPersonaManagement> _personaManager;	// 16 = 0x10
    NSString *_personaUniqueString;	// 24 = 0x18
    NSSet *_applicationIdentifiers;	// 32 = 0x20
    CDUnknownBlockType _modifyPersonaApplicationIdentifiersCompletionHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000832c4
@property(copy, nonatomic) CDUnknownBlockType modifyPersonaApplicationIdentifiersCompletionHandler; // @synthesize modifyPersonaApplicationIdentifiersCompletionHandler=_modifyPersonaApplicationIdentifiersCompletionHandler;
@property(readonly, nonatomic) NSSet *applicationIdentifiers; // @synthesize applicationIdentifiers=_applicationIdentifiers;
@property(readonly, nonatomic) NSString *personaUniqueString; // @synthesize personaUniqueString=_personaUniqueString;
@property(readonly, nonatomic) id <UMUserPersonaManagement> personaManager; // @synthesize personaManager=_personaManager;
- (void)start;	// IMP=0x0000000100082974
- (_Bool)isFinished;	// IMP=0x000000010008290c
- (_Bool)isExecuting;	// IMP=0x00000001000828a4
- (_Bool)isAsynchronous;	// IMP=0x0000000100082888
- (id)initWithPersonaUniqueString:(id)arg1 applicationIdentifiers:(id)arg2;	// IMP=0x0000000100082794
- (id)initWithPersonaManager:(id)arg1 personaUniqueString:(id)arg2 applicationIdentifiers:(id)arg3;	// IMP=0x0000000100082614

@end

