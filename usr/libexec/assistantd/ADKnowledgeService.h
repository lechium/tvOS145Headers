//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADService.h"

@class CKKnowledgeStore;

@interface ADKnowledgeService : ADService
{
    CKKnowledgeStore *_inMemoryKnowledgeStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010005b95c
- (void)handleSetLinkedData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005b35c
- (void)handleGetLinkedData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005b060
- (void)handleDeleteValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005ad38
- (void)handleSetValuesForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005a4b8
- (void)handleGetValuesForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100059d84
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100059aec
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x0000000100059ae4
- (id)commandsForDomain:(id)arg1;	// IMP=0x0000000100059a0c
- (id)domains;	// IMP=0x0000000100059994
- (id)handle;	// IMP=0x0000000100059990
- (id)knowledgeStoreWithName:(id)arg1 type:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100059654
- (id)_inMemoryKnowledgeStore;	// IMP=0x00000001000595f4
- (id)init;	// IMP=0x0000000100059578

@end

