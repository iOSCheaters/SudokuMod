/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class MMWebView, MMWebViewDelegate, NSDictionary, NSString, NSURL, UIActivityIndicatorView, UIBarButtonItem, UISearchBar, UITextField, UIToolbar, UIViewController;

@interface MMBrowserViewController : _ADBannerContentSizeIdentifierLandscape <UIWebViewDelegate, UITextFieldDelegate, UISearchBarDelegate>
{
    UIToolbar *_bottomBar;
    UITextField *_searchTextField;
    UIActivityIndicatorView *_spinner;
    UIBarButtonItem *_safariButton;
    UIBarButtonItem *_refreshButton;
    MMWebView *_presentingWebView;
    MMWebView *_webView;
    MMWebViewDelegate *_webViewDelegate;
    UISearchBar *_searchBar;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_forwardButton;
    UIBarButtonItem *_closeButton;
    NSString *_searchBarText;
    NSURL *_URL;
    NSURL *_redirectURL;
    UIViewController *_viewControllerForPresentingModalView;
    int _presentationOrientation;
    unsigned int _orientationMask;
    NSDictionary *_parentAdInfo;
}

- (void)setParentAdInfo:(id)fp8;
- (id)parentAdInfo;
- (void)setOrientationMask:(unsigned int)fp8;
- (unsigned int)orientationMask;
- (void)setPresentationOrientation:(int)fp8;
- (int)presentationOrientation;
- (void)setViewControllerForPresentingModalView:(id)fp8;
- (id)viewControllerForPresentingModalView;
- (void)setRedirectURL:(id)fp8;
- (id)redirectURL;
- (void)setURL:(id)fp8;
- (id)URL;
- (void)setSearchBarText:(id)fp8;
- (id)searchBarText;
- (void)setCloseButton:(id)fp8;
- (id)closeButton;
- (void)setForwardButton:(id)fp8;
- (id)forwardButton;
- (void)setBackButton:(id)fp8;
- (id)backButton;
- (void)setSearchBar:(id)fp8;
- (id)searchBar;
- (void)setWebViewDelegate:(id)fp8;
- (id)webViewDelegate;
- (void)setWebView:(id)fp8;
- (id)webView;
- (void)setPresentingWebView:(id)fp8;
- (id)presentingWebView;
- (void)setRefreshButton:(id)fp8;
- (id)refreshButton;
- (void)setSafariButton:(id)fp8;
- (id)safariButton;
- (void)setSpinner:(id)fp8;
- (id)spinner;
- (void)setSearchTextField:(id)fp8;
- (id)searchTextField;
- (void)setBottomBar:(id)fp8;
- (id)bottomBar;
- (void).cxx_destruct;
- (void)searchBarCancelButtonClicked:(id)fp8;
- (void)searchBarSearchButtonClicked:(id)fp8;
- (void)searchBarTextDidBeginEditing:(id)fp8;
- (void)searchBar:(id)fp8 textDidChange:(id)fp12;
- (void)endActivity;
- (void)startActivity;
- (void)textFieldDidEndEditing:(id)fp8;
- (void)close;
- (void)refreshButtonPressed;
- (void)safariButtonPressed;
- (void)forwardButtonPressed;
- (void)backButtonPressed;
- (void)adModalDidDismiss;
- (void)adModalWillDismiss;
- (void)adModalDidAppear;
- (void)adModalWillAppear;
- (void)presentBrowser;
- (void)loadRequestWithURL:(id)fp8;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

@end

