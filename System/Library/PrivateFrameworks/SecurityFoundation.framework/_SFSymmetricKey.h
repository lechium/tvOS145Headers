/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/_SFKey.h>

@class _SFSymmetricKeySpecifier;

@interface _SFSymmetricKey : _SFKey {

	id _symmetricKeyInternal;

}

@property (nonatomic,copy,readonly) _SFSymmetricKeySpecifier * keySpecifier; 
+(Class)_attributesClass;
-(id)_keyData;
-(id)keyData;
-(id)initWithData:(id)arg1 specifier:(id)arg2 error:(id*)arg3 ;
-(id)initRandomKeyWithSpecifier:(id)arg1 error:(id*)arg2 ;
@end

