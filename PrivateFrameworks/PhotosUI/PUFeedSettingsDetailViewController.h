/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

@class NSString;

@interface PUFeedSettingsDetailViewController : UITableViewController
{
    NSString *_setting;
}

@property(retain, nonatomic) NSString *setting; // @synthesize setting=_setting;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;

@end

