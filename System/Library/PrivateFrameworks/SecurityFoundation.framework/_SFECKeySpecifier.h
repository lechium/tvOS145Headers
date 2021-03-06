/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFAsymmetricKeySpecifier.h>

@interface _SFECKeySpecifier : _SFAsymmetricKeySpecifier {

	id _ecKeySpecifierInternal;

}

@property (assign) long long curve; 
+(BOOL)supportsSecureCoding;
+(Class)keyClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)curve;
-(void)setCurve:(long long)arg1 ;
-(id)initWithCurve:(long long)arg1 ;
@end

