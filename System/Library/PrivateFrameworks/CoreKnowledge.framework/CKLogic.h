/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CKLogic : NSObject {

	 body;
	 negatedBody;

}

@property (readonly,nonatomic) long long hash; 
@property (readonly,nonatomic) NSString * identifier; 
+(id)ifExistsLink:(id)arg1 to:(id)arg2 ;
+(id)ifNotExistsLink:(id)arg1 to:(id)arg2 ;
-(long long)hash;
-(id)init;
-(NSString *)identifier;
-(id)and:(id)arg1 ;
-(id)andExistsLink:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(id)andNotExistsLink:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
@end

