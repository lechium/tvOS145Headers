/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKKnowledgeStore;

@interface INUserContextStore : NSObject {

	CKKnowledgeStore* _knowledgeStore;

}
+(id)findDataInValue:(id)arg1 ;
+(id)keyPrefixForType:(long long)arg1 ;
+(id)keyForBundleIdentifier:(id)arg1 andType:(long long)arg2 ;
+(id)sharedStore;
-(id)_init;
-(void)storeUserContext:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)removeUserContextOfClass:(Class)arg1 forBundleIdentifier:(id)arg2 ;
-(void)storeUserContextViaHelper:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)userContextOfClass:(Class)arg1 forBundleIdentifiers:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)userContextOfClass:(Class)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_initWithKnowledgeStore:(id)arg1 ;
@end

