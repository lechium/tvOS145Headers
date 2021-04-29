/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CKVItemMapper.h>

@class NSString;

@interface CKVContactMapper : NSObject <CKVItemMapper>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)targetItemType;
+(id)itemBufferFromExternalVocabularyItem:(id)arg1 error:(id*)arg2 ;
+(id)_itemBufferFromContact:(id)arg1 error:(id*)arg2 ;
+(BOOL)_addLabeledFieldsOfType:(long long)arg1 labeledValues:(id)arg2 labelOnly:(BOOL)arg3 builder:(id)arg4 error:(id*)arg5 ;
+(id)_flattenLabeledValue:(id)arg1 ;
@end

