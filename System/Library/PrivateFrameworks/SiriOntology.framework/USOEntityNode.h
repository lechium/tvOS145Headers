/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriOntology/SiriOntology-Structs.h>
#import <SiriOntology/USOGraphNode.h>

@interface USOEntityNode : USOGraphNode {

	UsoEntityNode* _usoEntityNode;

}
-(void)addUtteranceAlignmentWithAsrIndex:(unsigned)arg1 StartIndex:(unsigned)arg2 endIndex:(unsigned)arg3 startUnicodeScalarIndex:(unsigned)arg4 endUnicodeScalarIndex:(unsigned)arg5 ;
-(void)addIdentifierWithValue:(id)arg1 appBundleId:(id)arg2 namespaceString:(id)arg3 ;
-(id)initWithCppEntityNode:(UsoEntityNode*)arg1 ;
@end

