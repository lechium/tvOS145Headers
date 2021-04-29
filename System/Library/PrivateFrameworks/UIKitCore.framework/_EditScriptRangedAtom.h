/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString;

@interface _EditScriptRangedAtom : NSObject {

	NSString* _replacementText;
	NSRange _editRange;

}

@property (assign,nonatomic) NSRange editRange;                       //@synthesize editRange=_editRange - In the implementation block
@property (nonatomic,retain) NSString * replacementText;              //@synthesize replacementText=_replacementText - In the implementation block
+(id)atomWithEditRange:(NSRange)arg1 replacementText:(id)arg2 ;
-(id)description;
-(void)setEditRange:(NSRange)arg1 ;
-(void)setReplacementText:(NSString *)arg1 ;
-(NSRange)editRange;
-(NSString *)replacementText;
-(id)initWithEditRange:(NSRange)arg1 replacementText:(id)arg2 ;
@end

