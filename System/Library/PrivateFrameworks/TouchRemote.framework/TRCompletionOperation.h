/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchRemote/TROperation.h>

@interface TRCompletionOperation : TROperation {

	BOOL _success;
	long long _errorCode;

}

@property (assign,nonatomic) BOOL success;                     //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) long long errorCode;              //@synthesize errorCode=_errorCode - In the implementation block
-(void)execute;
-(BOOL)success;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(void)setSuccess:(BOOL)arg1 ;
@end

