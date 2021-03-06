/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHPerson;

@interface _PXForYouPeopleQuestion : NSObject {

	long long _questionType;
	PHPerson* _targetPerson;

}

@property (nonatomic,readonly) long long questionType;               //@synthesize questionType=_questionType - In the implementation block
@property (nonatomic,readonly) PHPerson * targetPerson;              //@synthesize targetPerson=_targetPerson - In the implementation block
-(long long)questionType;
-(PHPerson *)targetPerson;
-(id)initWithQuestionType:(long long)arg1 targetPerson:(id)arg2 ;
@end

