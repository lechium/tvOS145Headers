/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CoreDAVItemParserMapping : NSObject {

	NSString* _nameSpace;
	NSString* _name;
	Class _parseClass;

}

@property (nonatomic,retain) NSString * nameSpace;              //@synthesize nameSpace=_nameSpace - In the implementation block
@property (nonatomic,retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) Class parseClass;                  //@synthesize parseClass=_parseClass - In the implementation block
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)nameSpace;
-(id)initWithNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 ;
-(void)setNameSpace:(NSString *)arg1 ;
-(void)setParseClass:(Class)arg1 ;
-(Class)parseClass;
@end

