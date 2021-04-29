/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface DEExpander : NSObject {

	BOOL _shouldEvaluateConditions;
	BOOL _shouldExpandOpts;
	NSDictionary* _parameters;

}

@property (nonatomic,retain) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign) BOOL shouldEvaluateConditions;                    //@synthesize shouldEvaluateConditions=_shouldEvaluateConditions - In the implementation block
@property (assign) BOOL shouldExpandOpts;                            //@synthesize shouldExpandOpts=_shouldExpandOpts - In the implementation block
-(id)init;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setShouldEvaluateConditions:(BOOL)arg1 ;
-(void)setShouldExpandOpts:(BOOL)arg1 ;
-(BOOL)shouldEvaluateConditions;
-(BOOL)shouldExpandOpts;
-(id)expandWithParamsString:(id)arg1 localeString:(id)arg2 ;
-(id)expandWithParamsString:(id)arg1 localeString:(id)arg2 evaluateConditions:(BOOL)arg3 ;
@end

