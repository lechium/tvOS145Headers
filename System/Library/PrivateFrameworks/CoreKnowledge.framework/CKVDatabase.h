/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKVDatabase <NSObject>
@required
-(id)path;
-(BOOL)openWithError:(id*)arg1;
-(BOOL)closeWithError:(id*)arg1;
-(BOOL)executeCommandString:(id)arg1 error:(id*)arg2;
-(BOOL)beginTransactionWithError:(id*)arg1;
-(BOOL)commitTransactionWithError:(id*)arg1;
-(BOOL)rollbackTransactionWithError:(id*)arg1;
-(id)executeCommand:(id)arg1 options:(unsigned long long)arg2;

@end
