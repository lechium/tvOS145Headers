/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CVNLPTextDecodingConfiguration : NSObject {

	/*^block*/id _commitActionBlock;

}

@property (assign,nonatomic) id commitActionBlock;              //@synthesize commitActionBlock=_commitActionBlock - In the implementation block
+(/*^block*/id)defaultWhitespaceCommitActionBehavior;
+(/*^block*/id)defaultCommitActionBehaviorForLocale:(id)arg1 ;
-(id)initWithCommitActionBehavior:(/*^block*/id)arg1 ;
-(id)commitActionBlock;
-(void)setCommitActionBlock:(id)arg1 ;
@end
