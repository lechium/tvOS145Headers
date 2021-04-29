/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoordinationCore/COMeshResponse.h>

@class COBallot;

@interface COMeshBaseBallotResponse : COMeshResponse {

	COBallot* _ballot;

}

@property (nonatomic,copy) COBallot * ballot;              //@synthesize ballot=_ballot - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBallot:(COBallot *)arg1 ;
-(COBallot *)ballot;
-(id)initWithBallot:(id)arg1 ;
@end

