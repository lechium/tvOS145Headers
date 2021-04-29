/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SCKZoneCommand.h>

@class NSString;

@interface SCWatchlistReplaceSymbolCommand : NSObject <SCKZoneCommand> {

	NSString* _oldSymbol;
	NSString* _replacementSymbol;

}

@property (nonatomic,copy,readonly) NSString * oldSymbol;                      //@synthesize oldSymbol=_oldSymbol - In the implementation block
@property (nonatomic,copy,readonly) NSString * replacementSymbol;              //@synthesize replacementSymbol=_replacementSymbol - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithOldSymbol:(id)arg1 replacementSymbol:(id)arg2 ;
-(void)executeWithZone:(id)arg1 ;
-(NSString *)oldSymbol;
-(NSString *)replacementSymbol;
@end

