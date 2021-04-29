/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface CPLProxyLibraryManagerSyncOutstandingInvocation : NSObject {

	BOOL _didFinish;
	NSDictionary* _errors;

}

@property (nonatomic,retain) NSDictionary * errors;              //@synthesize errors=_errors - In the implementation block
@property (assign,nonatomic) BOOL didFinish;                     //@synthesize didFinish=_didFinish - In the implementation block
-(id)description;
-(NSDictionary *)errors;
-(void)setErrors:(NSDictionary *)arg1 ;
-(BOOL)didFinish;
-(void)setDidFinish:(BOOL)arg1 ;
@end

